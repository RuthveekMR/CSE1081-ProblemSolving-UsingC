void main() {

    pid_t pid = fork();

    if (pid == 0) {

        // Child process

        printf("Child process running, PID: %d\n", getpid());

        sleep(10);

        printf("Child process exiting\n");

    } else {

        // Parent process

        exit(0); // Parent exits immediately

    }

}
