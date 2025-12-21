# Sandbox

A small 2D sandbox game that runs in the terminal. Wander the world with WASD, build structures with the `B` key, and remove what you've placed with the `X` key. Designed to be minimal, extensible, and playable entirely from the console.

![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![MSYS](https://img.shields.io/badge/MSYS-15.2.0-red)
![Version](https://img.shields.io/badge/version-v0.1.0-orange)
![Status](https://img.shields.io/badge/status-released-green)
![License](https://img.shields.io/badge/license-MIT-red)
![Version](https://img.shields.io/github/v/release/Exsich14/Sandbox)

## Features
- Top-down 2D world rendered in the terminal
- Simple movement using WASD
- Place blocks/tiles with `B`
- Remove your placed blocks with `X`
- Lightweight and easy to extend (add new block types, crafting, etc.)

## Controls
- W — Move up
- A — Move left
- S — Move down
- D — Move right
- B — Build/place a block at the targeted location (usually the tile in front of the player or the current cursor)
- X — Remove a block that you previously placed (works on the targeted tile)
- Q — Quit the game (if implemented)

## Gameplay
- Move around the map using WASD
- Press `B` to place a block
- Press `X` to remove a block you've placed

## How to run
1. Clone the repository:
   ```git clone https://github.com/Exsich14/Sandbox.git```
2. Compile the project with MSYS/MinGW: ```g++ sandbox.cpp -o sandbox```
3. Open a file named "sandbox.exe"

## Configuration & Extensions
- Add new block types (characters or colored tiles) by updating the block definitions.
- Implement a save/load feature to persist worlds between sessions.
- Add a simple inventory to limit the number of blocks the player can place.
- Implement different build modes (single block, line, fill).

## Contributing
Contributions are welcome — bug reports, new features, or improvements to the README. Open a PR or raise an issue on the repository.
