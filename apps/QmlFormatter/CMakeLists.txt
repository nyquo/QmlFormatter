# Sources for the application
set(QMLFORMATTER_SOURCES
  main.cpp
)

# Headers for the application
set(QMLFORMATTER_HEADERS
)

# Private links for the application
set(QMLFORMATTER_PRIVATE_LINKS
	QmlFormatterLib
)

# Generate the executable
add_executable(QmlFormatter ${QMLFORMATTER_SOURCES} ${QMLFORMATTER_HEADERS})
target_link_libraries(QmlFormatter PRIVATE ${QMLFORMATTER_PRIVATE_LINKS})
target_include_directories(QmlFormatter PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})