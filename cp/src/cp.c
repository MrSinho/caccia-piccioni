#ifdef __cplusplus
extern "C" {
#endif//__cplusplus



#include <memory.h>

#include "cp/cp.h"
#include "cp/cp-error.h"


#define DEFAULT_LED_GPIO      25
#define MOTION_SENSOR_GPIO    4



uint8_t flash_led(uint32_t times) {

	printf("cp: flashing light to pigeon\n");

	for (uint32_t i = 0; i < times; i++) {
		gpio_put(DEFAULT_LED_GPIO, 1);
		sleep_ms(50);
		gpio_put(DEFAULT_LED_GPIO, 0);
		sleep_ms(50);
	}

	return 1;
}


int main(void) {

    stdio_init_all();

    gpio_init(DEFAULT_LED_GPIO);
    gpio_set_dir(DEFAULT_LED_GPIO, GPIO_OUT);

    gpio_init(MOTION_SENSOR_GPIO);  
    gpio_set_dir(MOTION_SENSOR_GPIO, GPIO_IN);

	for (;;) {

    	if (!gpio_get(MOTION_SENSOR_GPIO)) { 
			printf("cp: pigeon detected!\n");
			flash_led(100);
		}

	}

	return 0;
}



#ifdef __cplusplus
}
#endif//__cplusplus