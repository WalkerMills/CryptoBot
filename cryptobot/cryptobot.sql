DROP TABLE IF EXISTS cryptobot_uses;
DROP TABLE IF EXISTS cryptobot_key;
DROP TABLE IF EXISTS cryptobot_runs;
DROP TABLE IF EXISTS cryptobot_bot;
DROP TABLE IF EXISTS cryptobot_host;
DROP TABLE IF EXISTS cryptobot_trade;

CREATE TABLE cryptobot_key(
    id INT NOT NULL GENERATED ALWAYS AS IDENTITY,
    name STRING NOT NULL,
    hash VARCHAR(36) NOT NULL,
    ciphertext BINARY(48) NOT NULL,

    PRIMARY KEY (id)
);

CREATE TABLE cryptobot_uses(
    id INT NOT NULL GENERATED ALWAYS AS IDENTITY,
    uid INT NOT NULL,
    kid INT NOT NULL,

    PRIMARY KEY (id),
    UNIQUE (uid, kid),
    FOREIGN KEY (uid) REFERENCES auth_user(id),
    FOREIGN KEY (kid) REFERENCES cryptobot_key(id)
);

CREATE TABLE cryptobot_bot(
    id INT NOT NULL GENERATED ALWAYS AS IDENTITY,
    uid INT NOT NULL,
    name VARCHAR(24) NOT NULL,
    work INT NOT NULL,

    PRIMARY KEY (id)
    UNIQUE (uid, name),
    FOREIGN KEY (uid) REFERENCES auth_user(id),
);

CREATE TABLE cryptobot_host(
    id INT NOT NULL GENERATED ALWAYS AS IDENTITY,
    addr STRING NOT NULL,
    workload INT NOT NULL,

    PRIMARY KEY (id)
);

CREATE TABLE cryptobot_runs(
    id INT NOT NULL GENERATED ALWAYS AS IDENTITY,
    hid INT NOT NULL,
    bid INT NOT NULL,
    pid INT NOT NULL,

    PRIMARY KEY (id),
    UNIQUE (hid, bid),
    FOREIGN KEY (hid) REFERENCES cryptobot_host(id),
    FOREIGN KEY (bid) REFERENCES cryptobot_bot(id)
);

CREATE TABLE cryptobot_trade(
    id INT NOT NULL GENERATED ALWAYS AS IDENTITY,
    time INT NOT NULL,
    price DOUBLE NOT NULL,
    amount DOUBLE NOT NULL,

    PRIMARY KEY (id)
);
