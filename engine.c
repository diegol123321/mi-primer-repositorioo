float get_engine_speed()
{
    unsigned short engine_speed_sensor = 0x1E;
    return (float)engine_speed_sensor;
}

// Calcula la velocidad del vehículo en m/s
// rpm: revoluciones por minuto del motor o llanta
// radio_llanta: radio de la llanta en metros
// par_motor: torque en Nm (no se usa directamente para velocidad, pero se incluye como parámetro)
double calcular_velocidad_vehiculo(double rpm, double radio_llanta, double par_motor) {
    // Convertir RPM a velocidad angular (rad/s)
    double velocidad_angular = 2.0 * 3.141592653589793 * rpm / 60.0;
    // Calcular velocidad lineal (m/s)
    double velocidad_lineal = velocidad_angular * radio_llanta;
    // El par motor puede usarse para cálculos de aceleración, pero no afecta la velocidad instantánea
    return velocidad_lineal;
}
