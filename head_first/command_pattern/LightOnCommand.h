class Light;

class LightOnCommand : public Command {
    private:
        Light light;
    public:
        LightOnCommand(Light light);
        void execute();
}