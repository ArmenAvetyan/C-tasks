#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vecImp.h"

//Constructors and Destructor
void vector_init(Vector* this) {
    this->data = NULL;
    this->size = 0;
    this->capacity = 0;
}

void vector_init_size(Vector* this, size_t n) {
    if ((this->data = calloc(n, sizeof(int))) == NULL) {
        perror("Calloc failed!");
        this->size = 0;
        this->capacity = 0;
        return;
    }
    this->size = n;
    this->capacity = n;
}

void vector_init_fill(Vector* this, size_t n, int value) {
    if ((this->data = malloc(n *  sizeof(int))) == NULL) { 
        perror("malloc failed!");
        this->size = 0;
        this->capacity = 0;
        return;
    } 
    for (int i = 0; i < n; ++i) {
        this->data[i] = value;
    }
    this->size = n;
    this->capacity = n;
}

void vector_destroy(Vector* this) {
    free(this->data);
    vector_init(this);
}

void vector_copy(Vector* this, const Vector* other) {
    if (this == other) return;
    if (this->data == NULL) {
        this->data = malloc(other->capacity * sizeof(int));
        if (this->data == NULL) {
            perror("malloc failed!");
            this->size = 0;
            this->capacity = 0;
            return;
        } 
        this->size = other->size;
        this->capacity = other->capacity;
        memcpy(this->data, other->data, other->size * sizeof(int));
    } else {
        if (this->capacity == other->capacity) {
            this->size = other->size;
            memcpy(this->data, other->data, other->size * sizeof(int));
        } else {
            free(this->data);
            if((this->data = malloc(other->capacity * sizeof(int))) == NULL) {
                perror("malloc failed!");
                this->size = 0;
                this->capacity = 0;
                return;
            } 
            this->size = other->size;
            this->capacity = other->capacity;
            memcpy(this->data, other->data, other->size * sizeof(int));
        }
    }
}

//Assignment Operators
Vector* vector_assign(Vector* dest, const Vector* src) {
   vector_copy(dest, src); 
   return dest;
}

//Element Access
int* vector_at(Vector* v, size_t index) {
    if (v == NULL || v->data == NULL || index >= v->size || v->capacity == 0)
        return NULL;
    return &v->data[index];
}

int* vector_front(Vector* v) {
    if (v == NULL || v->data == NULL || v->size == 0 || v->capacity == 0) 
        return NULL;
    return &v->data[0];
}

int* vector_back(Vector* v) {
    if (v == NULL || v->data == NULL || v->size == 0 || v->capacity == 0) 
        return NULL;
    return &v->data[v->size - 1];
}

//Capacity
int vector_empty(const Vector* v) {
    if (v == NULL || v->size == 0)
        return 1;
    return 0;
}

size_t vector_size(const Vector* v) {
    if (v == NULL)
        return 0;
    return v->size;
}

size_t vector_capacity(const Vector* v) {
    if (v == NULL)
        return 0;
    return v->capacity;
}

void vector_reserve(Vector* v, size_t new_cap) {
    if (v == NULL) return;
    if (new_cap > v->capacity) {
        int* tmp = realloc(v->data, new_cap * sizeof(int));
        if (tmp == NULL) return;
        v->data = tmp;
        v->capacity = new_cap;
    }
}

// Modifiers
void vector_clear(Vector* v) {
    if (v == NULL) return;
    v->size = 0;
}

void vector_push_back(Vector* v, int value) {
    if (v == NULL) return;
    if (v->capacity == v->size) {
        size_t new_cap = 0;
        if (v->capacity == 0 || v->capacity == 1) {
            new_cap = 3;
        } else {
            new_cap = v->capacity + v->capacity / 2;
        }
        int* tmp = realloc(v->data, new_cap * sizeof(int));
        if (tmp == NULL) return;
        v->data = tmp;
        v->capacity = new_cap;
    }
    v->data[v->size++] = value;
}

void vector_pop_back(Vector* v) {
    if (v == NULL || v->size == 0) return;
    v->size--;
}

void vector_insert(Vector* v, size_t pos, int value) {
    if (v == NULL) return; 
    if (v->capacity == v->size) {
        size_t new_cap = 0;
        if (v->capacity == 0 || v->capacity == 1) {
            new_cap = 3;
        } else { 
            new_cap = v->capacity + v->capacity / 2;
        }
        int* tmp = realloc(v->data, new_cap * sizeof(int));
        if (tmp == NULL) return;
        v->data = tmp;
        v->capacity = new_cap;
    } 
    if (pos >= v->size) {
        v->data[v->size++] = value;
        return;
    }
    size_t n_size = v->size - pos;
    memmove(&v->data[pos + 1], &v->data[pos], n_size * sizeof(int));
    v->data[pos] = value;
    v->size++;
}

void vector_erase(Vector* v, size_t pos) {
    if (v == NULL || pos >= v->size) return;
    if (pos == v->size - 1) {
        v->size--;
        return;
    }
    size_t n_size = v->size - pos - 1;
    memmove(&v->data[pos], &v->data[pos + 1], n_size * sizeof(int));
    v->size--;
}

void vector_resize(Vector* v, size_t count) {
    if (v == NULL || count == v->size) return; 
    if (count > v->capacity) {
        int* temp = realloc(v->data, count * sizeof(int));
        if(temp == NULL) return;
        v->data = temp;
        v->capacity = count;
    } 
    v->size = count;
}

void vector_swap(Vector* v1, Vector* v2) {
    if (v1 == NULL || v2 == NULL) return;
    int* tmp = v2->data;
    v2->data = v1->data;
    v1->data = tmp;
    size_t tmp_t = v2->size;
    v2->size = v1->size;
    v1->size = tmp_t;
    tmp_t = v2->capacity;
    v2->capacity = v1->capacity;
    v1->capacity = tmp_t;
}
