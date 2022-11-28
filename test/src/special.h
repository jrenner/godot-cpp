/* godot-cpp integration testing project.
 *
 * This is free and unencumbered software released into the public domain.
 */

#ifndef SPECIAL_CLASS_H
#define SPECIAL_CLASS_H

// We don't need windows.h in this example plugin but many others do, and it can
// lead to annoying situations due to the ton of macros it defines.
// So we include it and make sure CI warns us if we use something that conflicts
// with a Windows define.
#ifdef WIN32
#include <windows.h>
#endif

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/viewport.hpp>

#include <godot_cpp/core/binder_common.hpp>

using namespace godot;

class Special : public Control {
	GDCLASS(Special, Control);

protected:
	static void _bind_methods();


public:
	Special();
	~Special();
	int some_garbage();
};

#endif // SPECIAL_CLASS_H