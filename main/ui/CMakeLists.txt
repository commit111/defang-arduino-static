SET(SOURCES screens/ui_loading.c
    screens/ui_mainScreen.c
    screens/ui_demoScreen.c
    screens/ui_demoScreen2.c
    screens/ui_demoScreen3.c
    screens/ui_demoScreen4.c
    screens/ui_demoScreen5.c
    screens/ui_demoScreen6.c
    screens/ui_demoScreen7.c
    screens/ui_demoScreen8.c
    screens/ui_demoScreen9.c
    screens/ui_demoScreen10.c
    screens/ui_demoScreen11.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_1452681969.c)

add_library(ui ${SOURCES})
