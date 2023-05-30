#include <iostream>
#include <string>

// include your header file here:
#include "dog.hpp"

int main() {
  PavlovianDog dog;
  dog.setConditionedStimulus("bell");
  dog.setUnconditionedResponse("salivation");
  dog.setConditionedResponse("salivation");
  dog.condition();

  return 0;
}
