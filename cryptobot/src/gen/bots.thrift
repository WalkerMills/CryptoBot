namespace cpp server

service Bot {
    oneway void run(1:i32 id, 2:bool trade),
    oneway void stop(1:i32 id),
}
