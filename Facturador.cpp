#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Estructura para representar un cliente
struct Cliente {
    string nombre;
    string apellido;
    string direccion;
    string ciudad;
    string telefono;
};

// Estructura para representar un producto
struct Producto {
    string nombre;
    string categoria;
    int cantidad;
    double precio;
};

// Estructura para representar una venta
struct Venta {
    string producto;
    int cantidad;
    double total;
};

// Estructura para representar un proveedor
struct Proveedor {
    string nombre;
    string direccion;
    string ciudad;
    string telefono;
};

// Función para crear un archivo de texto
void crearArchivo(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    archivo.close();
}

// Función para registrar datos de un cliente
void registrarCliente(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::app);

    Cliente cliente;
    cout << "Ingrese el nombre del cliente: ";
    cin >> cliente.nombre;
    cout << "Ingrese el apellido: ";
    cin >> cliente.apellido;
    cout << "Ingrese la dirección: ";
    cin >> cliente.direccion;
    cout << "Ingrese la ciudad: ";
    cin >> cliente.ciudad;
    cout << "Ingrese el teléfono: ";
    cin >> cliente.telefono;

    archivo << cliente.nombre << "," << cliente.apellido << "," << cliente.direccion << "," << cliente.ciudad << "," << cliente.telefono << "\n";

    archivo.close();
}

// Función para mostrar todos los clientes registrados
void mostrarClientes(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error al abrir el archivo de clientes.\n";
        return;
    }

    cout << "Clientes registrados:\n";
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

// Función para registrar un producto
void registrarProducto(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::app);

    Producto producto;
    cout << "Ingrese el nombre del producto: ";
    cin >> producto.nombre;
    cout << "Ingrese la categoría: ";
    cin >> producto.categoria;
    cout << "Ingrese la cantidad disponible: ";
    cin >> producto.cantidad;
    cout << "Ingrese el precio por unidad: ";
    cin >> producto.precio;

    archivo << producto.nombre << "," << producto.categoria << "," << producto.cantidad << "," << producto.precio << "\n";

    archivo.close();
}

// Función para mostrar todos los productos
void mostrarProductos(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error al abrir el archivo de productos.\n";
        return;
    }

    cout << "Productos registrados:\n";
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

// Función para registrar una venta
void registrarVenta(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::app);

    Venta venta;
    cout << "Ingrese el producto vendido: ";
    cin >> venta.producto;
    cout << "Ingrese la cantidad vendida: ";
    cin >> venta.cantidad;
    cout << "Ingrese el monto total de la venta: ";
    cin >> venta.total;

    archivo << venta.producto << "," << venta.cantidad << "," << venta.total << "\n";

    archivo.close();
}

// Función para mostrar todas las ventas
void mostrarVentas(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error al abrir el archivo de ventas.\n";
        return;
    }

    cout << "Ventas registradas:\n";
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

// Función para registrar un proveedor
void registrarProveedor(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::app);

    Proveedor proveedor;
    cout << "Ingrese el nombre del proveedor: ";
    cin >> proveedor.nombre;
    cout << "Ingrese la dirección: ";
    cin >> proveedor.direccion;
    cout << "Ingrese la ciudad: ";
    cin >> proveedor.ciudad;
    cout << "Ingrese el teléfono: ";
    cin >> proveedor.telefono;

    archivo << proveedor.nombre << "," << proveedor.direccion << "," << proveedor.ciudad << "," << proveedor.telefono << "\n";

    archivo.close();
}

// Función para mostrar todos los proveedores
void mostrarProveedores(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error al abrir el archivo de proveedores.\n";
        return;
    }

    cout << "Proveedores registrados:\n";
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

int main() {
    // Crear archivos una vez al inicio del programa
    crearArchivo("clientes.txt");
    crearArchivo("productos.txt");
    crearArchivo("ventas.txt");
    crearArchivo("proveedores.txt");

    while (true) {
    	cout << "=====================================" << endl;
    	cout << "     Bienvenido Inge Jenner            " << endl;
    	cout << "     Facturador - UMG  " << endl;
    	cout << "   Carlos Argueta - 3090 23 18218   " << endl;
    	cout << "=====================================" << endl;
        cout << "1. Registrar Cliente\n";
        cout << "2. Consultar Clientes\n";
        cout << "3. Registrar Producto\n";
        cout << "4. Consultar Productos\n";
        cout << "5. Registrar Venta\n";
        cout << "6. Consultar Ventas\n";
        cout << "7. Registrar Proveedor\n";
        cout << "8. Consultar Proveedores\n";
        cout << "9. Salir\n";
        cout << "Elija una opción: ";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarCliente("clientes.txt");
                break;
            case 2:
                mostrarClientes("clientes.txt");
                break;
            case 3:
                registrarProducto("productos.txt");
                break;
            case 4:
                mostrarProductos("productos.txt");
                break;
            case 5:
                registrarVenta("ventas.txt");
                break;
            case 6:
                mostrarVentas("ventas.txt");
                break;
            case 7:
                registrarProveedor("proveedores.txt");
                break;
            case 8:
                mostrarProveedores("proveedores.txt");
                break;
            case 9:
                return 0;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    }

    return 0;
}

