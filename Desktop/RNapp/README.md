# React Native To-Do App

A simple and elegant to-do application built with React Native and Expo. This app allows users to manage their daily tasks with a clean and intuitive interface.

![App Screenshot](assets/goal.png)

## Features

- Add new tasks with a simple tap
- Delete tasks with a swipe
- Clean and modern UI with a dark theme
- Smooth animations and transitions
- Cross-platform support (iOS and Android)

## Tech Stack

- React Native
- Expo
- React Hooks (useState)
- FlatList for efficient rendering
- Custom components for reusability

## Installation

1. Clone the repository:
```bash
git clone https://github.com/parthtiwaskar/to-do-app.git
cd to-do-app
```

2. Install dependencies:
```bash
npm install
```

3. Start the development server:
```bash
npm start
```

4. Run on your preferred platform:
```bash
# For iOS
npm run ios

# For Android
npm run android

# For web
npm run web
```

## Project Structure

```
to-do-app/
├── App.js                 # Main application component
├── Component/             # Reusable components
│   ├── GoalInput.js      # Input component for adding new goals
│   └── GoalItem.js       # Component for displaying individual goals
├── assets/               # Image assets
└── package.json          # Project dependencies and scripts
```

## Usage

1. Tap the "Add New Goal" button to create a new task
2. Enter your task in the input field
3. Tap "Add Goal" to save or "Cancel" to discard
4. Swipe left on any task to delete it

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Author

- Parth Tiwaskar
- GitHub: [@parthtiwaskar](https://github.com/parthtiwaskar)

## Acknowledgments

- Built with React Native and Expo
- Inspired by modern task management applications 