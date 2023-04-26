#define MAX 100
typedef struct{
    int idCat;
    char nombre[30];
}categoria;

categoria categorias[MAX];

/*Registro de Producto*/
typedef struct{
    /* data */
    int id;
    char nombre[30];
    char desc[200];
    float precio;
    categoria categoria;
}producto;

producto productos[MAX];
