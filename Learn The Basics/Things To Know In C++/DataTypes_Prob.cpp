#include <string>
#include <iostream> // Include necessary headers

int dataTypes(string type) {
    if (type == "Integer") {
        return 4;
    } else if (type == "Long") {
        return 8;
    } else if (type == "Float") {
        return 4;
    } else if (type == "Double") {
        return 8;
    } else if (type == "Character") {
        return 1;
    } else {
        // Handle unknown type, maybe return a special value or throw an exception
        return -1; // for example
    }
}
