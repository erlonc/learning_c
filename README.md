# Learning C

Repository with exercises I solved to learn the c language.

## How to use (linux)

**csv_to_json**: convert CSV data to JSON.
```
(./bin/csv_to_json < gps_data.csv) > gps_data.json
```

**secret_messages**: filter words in text file and redirects to standard output (stdout) and standard error (stderr).
```
(./bin/secret_messages < secrect.txt) > message1.txt 2> message2.txt
```

**bermudas_geo**: filter data about the shorts rectangle from a CSV file and then convert the data to JSON
```
./bin/bermudas_geo < bermudas_geo.csv | ./bin/csv_to_json > bermudas_geo.json
```

**others**
```
./bin/file_name
```
