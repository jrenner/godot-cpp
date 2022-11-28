extends Button


# Called when the node enters the scene tree for the first time.
func _ready():	
	self.connect("button_down", self.get_garbage)
	pass # Replace with function body.


func get_garbage():
	var parent: Special = get_parent()
	prints("parent: ", parent)
	var garbage = parent.some_garbage()
	prints("garbage result:", garbage)	

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	pass
