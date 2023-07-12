#include <Python/Python.h>
#include <stdio.h>
void print_python_list_info(PyObject *p) {
    Py_ssize_t size, i;
    PyObject *item;

    size = PyList_Size(p);
    printf("Tamaño de la lista: %zd\n", size);

    printf("[*] Elementos de la lista:\n");
    for (i = 0; i < size; i++) {
        item = PyList_GetItem(p, i);
        printf("Elemento %zd: %s\n", i, Py_TYPE(item)->tp_name);
    }
}
