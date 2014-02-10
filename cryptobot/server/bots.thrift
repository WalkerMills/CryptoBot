namespace cpp server

service BotClient {
    oneway void create_bot(1:string username, 2:string name),
    oneway void delete_bot(1:string username, 2:string name),
    oneway void run_bot(1:string username, 2:string name),
    oneway void stop_bot(1:string username, 2:string name)
}
