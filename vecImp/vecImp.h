#ifndef VECTOR_H
#define VECTOR_H

//Structure Definition
typedef struct Vector {
    int* data;
    size_t size;
    size_t capacity;
} Vector;

//Constructors and Destructor
void vector_init(Vector* this);
void vector_init_size(Vector* this, size_t n);
void vector_init_fill(Vector* this, size_t n, int value);
void vector_destroy(Vector* this);
void vector_copy(Vector* this, const Vector* other);

//Assignment Operators
Vector* vector_assign(Vector* dest, const Vector* src);

//Element Access
int* vector_at(Vector* v, size_t index);
int* vector_front(Vector* v);
int* vector_back(Vector* v);

//Capacity
int vector_empty(const Vector* v);
size_t vector_size(const Vector* v);
size_t vector_capacity(const Vector* v);
void vector_reserve(Vector* v, size_t new_cap);

//Modifiers
void vector_clear(Vector* v);
void vector_push_back(Vector* v, int value);
void vector_pop_back(Vector* v);
void vector_insert(Vector* v, size_t pos, int value);
void vector_erase(Vector* v, size_t pos);
void vector_resize(Vector* v, size_t count);
void vector_swap(Vector* v1, Vector* v2);

#endif
