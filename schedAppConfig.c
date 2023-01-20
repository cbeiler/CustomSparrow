// App Configuration definition
typedef struct {

    // General
    const char *name;

    // How often we get activated
    uint32_t activationPeriodSecs;

    // While app is active, how often it's polled
    uint32_t pollIntervalSecs;

    // Handlers
    schedActivateFunc activateFn;
    schedInterruptFunc interruptFn;
    schedPollFunc pollFn;
    schedResponseFunc responseFn;

    // Application Context
    void *appContext;

} schedAppConfig;
