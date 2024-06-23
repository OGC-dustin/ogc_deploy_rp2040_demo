#ifndef HAL_H
#define HAL_H

/* redirection to all the HAL libraries */
#include "ogc_hw_rp2040_pico_w.h"
#include "ogc_hw_deskpi_picomate.h"

void hal_config( void );
void hal_init( void );

#endif /* HAL_H */

