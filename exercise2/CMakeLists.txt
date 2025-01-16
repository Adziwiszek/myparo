add_library(ScrabbleScore SHARED
  src/scrabble-score.cpp
)

target_include_directories (DayOfYear PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(ut)
