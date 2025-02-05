# OOP-CS-121

class Horse(
  - int position
  - int trackLength
  - int id
  + Horse()
  + init(int id, int trackLength)
  + void advance()
  + void printLane()
  + bool isWinner()
)

class Race(
  - Horse horses[]
  - const int trackLength
  - const int numHorses
  + Race()
  + void run()
)
