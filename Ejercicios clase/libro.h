#include <iostream>
#include <string>

class Libro {
private:
    std::string titulo;
    int anio_pub;
    std::string isbn;

public:
    Libro();
    Libro(std::string, int, std::string);

    friend std::ostream & operator <<(std::ostream &, Libro &);

};
#endif
