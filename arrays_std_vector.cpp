#include <vector>

#include <Arduino.h>

class Container {
private:
    std::vector<uint8_t> &values;

public:
    Container(std::vector<uint8_t> values) : values(values) {
    }

    void print() {
        for (auto value : values) {
            Serial.println(value);
        }
    }
};

void setup() {
    Serial.begin(115200);
    while (!Serial) {
        delay(10);
    }

    std::vector<uint8_t> values = {
        1, 2, 3
    };

    Container c(values);
    c.print();
}

void loop() {
}
