# Sources for the application
set(QMLFORMATTER_SOURCES
  main.cpp
)

# Headers for the application
set(QMLFORMATTER_HEADERS
)

# Generate the executable
add_executable(QmlFormatter ${QMLFORMATTER_SOURCES} ${QMLFORMATTER_HEADERS})
target_include_directories(QmlFormatter PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})