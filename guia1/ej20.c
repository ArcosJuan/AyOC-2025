int b,c; // Nacen b y c globales

void f(void) {
    int b, d; // Nacen b y d locales
} // Acá mueren b (local) y d.

void g(int a) {
    int c; // Nace c local.
    {
        int a, d;  // Nace a y d local (a este bloque).
    } // Acá mueren a y d.
} // Acá muere c.


