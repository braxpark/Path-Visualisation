#include <SFML/System.hpp>
class AppState {
    public:
        int64_t delta_time_in_microseconds = 0;

        //interaction states refers to the way the user
        //can interact with the app --
        //this can include whether the grid is in simulation mode
        //where the paths are generative over a set number of time
        //as well as playground where a singular path is shown and the user
        //can adjust walls and the spawn node and the goal node
        
        std::string interaction_states[2] = {
                "Playground",
                "Simulate"
        };
        int current_interaction_state = 0;
        void update(sf::Time delta_time);
};


void AppState::update(sf::Time delta_time){
    this->delta_time_in_microseconds = delta_time.asMicroseconds();
}

