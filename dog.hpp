//make sure you include string and iostream as we are dealing with string and cout
#include <string>
#include <iostream>

//creating pavlovian dog class
class PavlovianDog {
//members
  std::string conditioned_stimulus;
  std::string unconditioned_response;
  std::string conditioned_response;

public:
//methods
void setConditionedStimulus(std::string stimulus);

void setUnconditionedResponse(std::string response);

void setConditionedResponse(std::string response);

void condition();

};
