file(GLOB SOURCES *.c)
set(BUTTON_INCLUDE_DIRS .)
list(APPEND SOURCES "buttons_isr.c")

# Include only the source file of the selected
# display controller.


idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS ${BUTTON_INCLUDE_DIRS})
#                       REQUIRES button)

#target_compile_definitions(${COMPONENT_LIB} PUBLIC "-DLV_LVGL_H_INCLUDE_SIMPLE")


