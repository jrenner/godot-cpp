/* godot-cpp integration testing project.
 *
 * This is free and unencumbered software released into the public domain.
 */

#include "special.h"

#include <godot_cpp/core/class_db.hpp>

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void Special::_bind_methods() {
    ClassDB::bind_method(D_METHOD("some_garbage"), &Special::some_garbage);
}

int Special::some_garbage() {
	UtilityFunctions::print("some_garbage func called.");
	return 5;
}

Special::Special() {
	UtilityFunctions::print("Special Constructor.");
}

Special::~Special() {
	UtilityFunctions::print("Special Destructor.");
}