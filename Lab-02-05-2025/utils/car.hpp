// Car class

namespace EngineControl
{
	class Control
	{
	public:
		void initialize();
	};
	// the rest of the code
}

namespace MediaControl
{
	class Control
	{
	public:
		void initialize();
	};
	// the rest of the code
}

int main() {
	// <namespace>::<class name> variable
	EngineControl::Control engine;
	MediaControl::Control media;

	engine.initialize();
	media.initialize();
}