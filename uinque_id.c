
#include <uinque_id.h>
#include <stdint.h>
#include <string.h>


int32_t read_mcu_unique_id( uint8_t * uuid ){

    int32_t result = 0 ;

    memcpy((uint8_t *) uuid , (uint8_t *) UUID_BASE_ADDRESS , UUID_SIZE_BYTE);

    return result ;

}

