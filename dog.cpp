#include "dog.hpp"

//defining pavlovian dog methods
void PavlovianDog::setConditionedStimulus(std::string stimulus) {
    conditioned_stimulus = stimulus;
  }

void PavlovianDog::setUnconditionedResponse(std::string response) {
    unconditioned_response = response;
  }

void PavlovianDog::setConditionedResponse(std::string response) {
    conditioned_response = response;
  }

void PavlovianDog::condition() {

    std::cout << "The dog hears the conditioned stimulus " << conditioned_stimulus << std::endl;

    std::cout << "The dog experiences the unconditioned response " << unconditioned_response << std::endl;

    std::cout << "The dog hears the conditioned stimulus " << conditioned_stimulus << std::endl;

    std::cout << "The dog exhibits the conditioned response " << conditioned_response << std::endl;
    }
