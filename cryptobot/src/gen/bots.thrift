namespace cpp server

service Bot {
    oneway void run(1:i32 id),
    oneway void stop(1:i32 id),
}
