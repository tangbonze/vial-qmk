import json
with open('keyboards/southerly_split_keeb/keyboard.json') as f:
    d = json.load(f)

layout = d['layouts']['LAYOUT_voyager']['layout']
matrix_rows = 10
matrix_cols = 6

vial_keymap = []
current_y = 0
current_row = []

for key in layout:
    if key['y'] != current_y:
        vial_keymap.append(current_row)
        current_row = []
        current_y = key['y']
    
    # Just basic placement since they have x, y in keyboard.json
    # actually vial expects KLE structure where rows are lists
    # but we can just emit each key with its x/y absolute positions for simplicity
    # Wait, KLE requires relative positioning if using standard format, but absolute is fine if we just start each row with y offset or x offset.
    pass

# Actually it's easier to just dump the flat keys into KLE
# Let's generate a simple KLE format:
vial_layout = []
for y in range(6):
    row_keys = []
    # Left hand: x=0..5
    for x in range(6):
        # find key
        k = next((k for k in layout if k['x']==x and k['y']==y), None)
        if k:
            row_keys.append({"matrix": k['matrix']})
            row_keys.append("")
    # Right hand: x=6..11, but keyboard.json has x=5..9 on right side?
    # Let's look at keyboard.json carefully:
    # "x": 5, "y": 5 is mapped to [5, 5]
    # "x": 6, "y": 5 is mapped to [6, 5]
