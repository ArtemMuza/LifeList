SET(SOURCES
    main.cpp
    Widgets/MainWindow.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME}  PRIVATE Qt6::Widgets)