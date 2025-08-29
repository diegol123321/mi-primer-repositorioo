#define SPEED_MAX_LOCK  0x0A
#define LOCK   0x02
#define UNLOCK 0x01

int doors_locking()
{

    unsigned short wheel_speed_sensor = 0xA;
    unsigned char lock_n_unlock = UNLOCK;

    if(SPEED_MAX_LOCK <=  wheel_speed_sensor)
    {
        lock_n_unlock = LOCK;
    }
}