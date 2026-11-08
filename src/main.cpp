// A minimal RTXUI app: replace it with your own.
//
// The component's look is an HTML template and CSS, in its `view` member.
// Bind() makes a member reactive state: change it, and the screen follows.
#include <rtxui/rtxui.hpp>

#include <string_view>

using namespace rtxui;

class App : public Component<App> {
 public:
  int count = 0;

  void Increment() { count++; }
  void Decrement() { count--; }

  App() {
    Bind(count);
    Bind(Increment);
    Bind(Decrement);
  }

  std::string_view view = R"html(
      <div class="card">
        <h1>Hello, RTXUI</h1>
        <p>Click the buttons, or Tab to one and press Enter.</p>
        <div class="row">
          <button onclick="Decrement">-</button>
          <span class="count">{count}</span>
          <button onclick="Increment">+</button>
        </div>
      </div>

      <style>
        self {
          display: flex;
          justify-content: center;
          width: 100%;
        }
        .card {
          border: rounded;
          padding: 1 3;
        }
        h1 {
          color: rgb(88, 166, 255);
        }
        .row {
          display: flex;
          align-items: center;
          gap: 2;
          margin-top: 1;
        }
        button {
          border: rounded;
          padding: 0 1;
        }
        button:hover, button:focus {
          color: rgb(88, 166, 255);
        }
        .count {
          font-weight: bold;
        }
      </style>
    )html";
};

int main() {
  auto app = Ref<App>::New();
  Screen screen(app);
  screen.Loop();
  return 0;
}
