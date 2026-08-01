# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\garage_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\garage_autogen.dir\\ParseCache.txt"
  "garage_autogen"
  )
endif()
