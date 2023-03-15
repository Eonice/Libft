int atoi(const char *str)
int atoi(const char *str) {
    int num = 0;
    int sign = 1;
    const char *p = str;

    // Saltar los espacios en blanco
    while (*p == ' ') {
        p++;
    }

    // Manejar el signo positivo o negativo
    if (*p == '-') {
        sign = -1;
        p++;
    } else if (*p == '+') {
        p++;
    }

    // Convertir cada dígito a un valor entero
    while (*p >= '0' && *p <= '9') {
        num = num * 10 + (*p - '0');
        p++;
    }

    // Aplicar el signo correcto y devolver el número entero
    return num * sign;
}
