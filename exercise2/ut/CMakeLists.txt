add_executable(ScrabbleScoreTests
  scrabble-score-tests.cpp)

target_link_libraries (ScrabbleScoreTests PUBLIC ScrabbleScore gtest_main)

add_test(NAME ScrabbleScore
    COMMAND ScrabbleScoreTests --gtest_output=xml:${CMAKE_BINARY_DIR}/junit/exercise2.junit.xml)
