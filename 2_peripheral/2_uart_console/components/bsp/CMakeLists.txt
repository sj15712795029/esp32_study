set (srcs 
	"bsp_led.c"
	"bsp_misc.c"
	)

set (includes 
	"."
	)
idf_component_register(SRCS ${srcs}
                    INCLUDE_DIRS ${includes})