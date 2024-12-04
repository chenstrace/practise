package main

import (
    "database/sql"
    "fmt"
    "log"

    _ "github.com/lib/pq"
)

func testDB() *sql.DB {
    host := "localhost"
    port := 5432
    user := "postgres"
    password := "postgres"
    dbname := "postgres"

    psqlInfo := fmt.Sprintf(
        "host=%s port=%d user=%s "+
            "password=%s dbname=%s sslmode=disable",
        host, port, user, password, dbname,
    )

    db, err := sql.Open("postgres", psqlInfo)
    if err != nil {
        log.Fatalf("Unable to connect to database: %v\n", err)
    }

    err = db.Ping()
    if err != nil {
        log.Fatalf("Failed to ping database: %v\n", err)
    }

    log.Println("Successfully connected!")
    return db
}


func main() {
    db := testDB()
    defer db.Close()
}
