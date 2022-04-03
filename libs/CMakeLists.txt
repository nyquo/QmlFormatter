set(LIBRARY_NAME "QmlFormatterLib")

# Sources for the lib
set(QMLFORMATTERLIB_SOURCES
	QmlFormatter/CommandLineParser.cpp
)

# Headers for the lib
set(QMLFORMATTERLIB_HEADERS
	QmlFormatter/CommandLineParser.hpp
)

# Generate the library
add_library(${LIBRARY_NAME} STATIC ${QMLFORMATTERLIB_SOURCES} ${QMLFORMATTERLIB_HEADERS})
target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/QmlFormatter)