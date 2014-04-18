DROP TABLE IF EXISTS cryptobot_uses;
DROP TABLE IF EXISTS cryptobot_owns;
DROP TABLE IF EXISTS cryptobot_runs;
DROP TABLE IF EXISTS cryptobot_key;
DROP TABLE IF EXISTS cryptobot_bot;
DROP TABLE IF EXISTS cryptobot_host;
DROP TABLE IF EXISTS cryptobot_trade;

CREATE TABLE cryptobot_key(
    id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(24) NOT NULL,
    key CHAR(36) NOT NULL,
    ciphertext BINARY(48) NOT NULL,

    PRIMARY KEY (id)
);

CREATE TABLE cryptobot_uses(
    id INT NOT NULL AUTO_INCREMENT,
    uid INT NOT NULL,
    kid INT NOT NULL,

    PRIMARY KEY (id),
    UNIQUE (uid, kid),
    FOREIGN KEY (uid) REFERENCES auth_user(id),
    FOREIGN KEY (kid) REFERENCES cryptobot_key(id)
);

CREATE TABLE cryptobot_bot(
    id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(24) NOT NULL,

    PRIMARY KEY (id)
);

CREATE TABLE cryptobot_owns(
    id INT NOT NULL AUTO_INCREMENT,
    uid INT NOT NULL,
    bid INT NOT NULL,

    PRIMARY KEY (id),
    UNIQUE (uid, bid),
    FOREIGN KEY (uid) REFERENCES auth_user(id),
    FOREIGN KEY (bid) REFERENCES cryptobot_bot(id)
);

CREATE TABLE cryptobot_host(
    id INT NOT NULL AUTO_INCREMENT,
    ip INT UNSIGNED NOT NULL,
    workload INT NOT NULL,

    PRIMARY KEY (id)
);

CREATE TABLE cryptobot_runs(
    id INT NOT NULL AUTO_INCREMENT,
    hid INT NOT NULL,
    bid INT NOT NULL,

    PRIMARY KEY (id),
    UNIQUE (hid, bid),
    FOREIGN KEY (hid) REFERENCES cryptobot_host(id),
    FOREIGN KEY (bid) REFERENCES cryptobot_bot(id),
);

CREATE TABLE cryptobot_trade(
    id INT NOT NULL AUTO_INCREMENT,
    time INT(10) NOT NULL,
    price NUMERIC(17, 12) NOT NULL,
    amount NUMERIC(20, 12) NOT NULL,

    PRIMARY KEY (id)
);
