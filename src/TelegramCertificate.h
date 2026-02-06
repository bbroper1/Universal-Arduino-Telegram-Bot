/*
   The root certificate will be valid for years:
   *.telegram.org ->
     Go Daddy Secure Certificate Authority - G2 ->
       Go Daddy Root Certificate Authority - G2
*/
//ISRG Root X1 certifiate
const char TELEGRAM_CERTIFICATE_ROOT[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIFazCCA1OgAwIBAgISA6kGEXLMaLLq5yRvCNrI6VsgMA0GCSqGSIb3DQEBCwUA
MEoxCzAJBgNVBAYTAlVTMRMwEQYDVQQKDApMZXQncyBFbmNyeXB0MR8wHQYDVQQL
DBZ3d3cubGV0c2VuY3J5cHQub3JnMB4XDTIwMDYxNjE2MjU1M1oXDTMwMDYxNDE2
MjU1M1owSjELMAkGA1UEBhMCVVMxEzARBgNVBAoMCkxldCdzIEVuY3J5cHQxHzAd
BgNVBAsMFnd3dy5sZXRzZW5jcnlwdC5vcmcwggIiMA0GCSqGSIb3DQEBAQUAA4IC
DwAwggIKAoICAQCt6VsgGAaHo9dZYkTfLZNVVRFlE0YyqS/fWznuaCG2lLBVmOAX
oJ1i8LojRxurx8WcN6i/K3PaY5E9O+V1YQUAECEV4VpWw2gw2gYdExgkt1/3uzMd
II4XESyqCCptNPTRT+t0NenE2no0RvrRZtGJPD7W82dManIeZDV4SSQSSHqzTeWY
AvzkdxlIo0NGdisz8Iky3Uczdlz7YT1Do1B4ezgmO6ijLJrVN6a8GN28AL5OHnqd
934V3CyMfCVxYvBy06SnVAk0nnk3uRlaRykGGBqBPdZiZsaAJ+lZeXqIuAv89xDS
VYRIlnJrped1IovnHgwlHGhEq+y3OC/YLXTr4Wr9PXgCulvRl6VwBEm90LkAMPxQ
vOBvyfOkH1ZZ1xd6QbaO5jM90oCbGyF/F7fs/3Gzdh0dX8GZFODdgNpTi27C/med
sJLdnOjFkMrDXLI4YAlnXrhIRbkIuAeGHWxirMRHkRkNvztNFVQVw1Gc7YCOUMIq
pGxTUMpOWcZH/5LiCFYI8aAkaI0s5momkGumZ5qX6Ch12yvDqOiiMHDL/95B2S/b
hCV2wAPOQgpdnH3UX0YPD6/COM24kTx5cDIeEJD7BqXc9E+u6KDAdAm8YGtS+wGG
U8J0uIK4WMbe6PfUu8tkFncraEw9loMZEvUyM+zP4h6AsVzTdDEr8QIDAQABo4IC
WjCCAlYwDgYDVR0PAQH/BAQDAgGGMB0GA1UdJQQWMBQGCCsGAQUFBwMBBggrBgEF
BQcDAjAMBgNVHRMBAf8EAjAAMB0GA1UdDgQWBBQO2mZixu8uE5Y3N6zGyF/F7kh/
zTAfBgNVHSMEGDAWgBQO2mZixu8uE5Y3N6zGyF/F7kh/zTBvBggrBgEFBQcBAQRj
MGEwLgYIKwYBBQUHMAGGImh0dHA6Ly9vY3NwLmludC14MS5sZXRzZW5jcnlwdC5v
cmcvMC8GCCsGAQUFBzAChiNodHRwOi8vY2VydC5pbnQteDEubGV0c2VuY3J5cHQu
b3JnLzA+BgNVHREEODA2ghBhcGkudGVsZWdyYW0ub3Jngh5hcGkuY2RuLnRlbGVn
cmFtLm9yZ4IPdGVsZWdyYW0ub3JnMB0GA1UdIAQWMBQwCAYGZ4EMAQIBMAgGBmeB
DAECAjCCAQMGCisGAQQB1nkCBAIEgfQEgfEA7wB1ALc++yTfnEJYpFYuZUCDq5ZQ
5C5a5eEOMF4i8vO/7UqFAAABd0yoynEAAAQDAEYwRAIgY8ZndKyVKoU9pYNCXS6A
FwXk4Hknc0NrF4Pjk6HoynECIHPPfQtbDNRsTA70vsK1tnE+bBZ5qTqL0U8nyCLc
FV3MA0GCSqGSIb3DQEBCwUAA4IBAQAFY3bT5iAG2wE8xmPKzW0fvkYlCYwH14r2S
jQunlslqY5T2r8j04YfGLmRoTSesFiNUFDXL9uBeb5GsyhQOdE31E4n4t4DccnE9
Fica8tWHZpizxgxYkWwaP42gnikIze8ih/7gToYtL6vhfVqlhK/SXxPxq8np5xpo
WmR7BncpsbR9f7DmqDveoxu48UUfZo0fo0RKZ77N8BINU3CFAaj6MqFmoVoeAQM4
iQF5EYh3YOEoTP0TO+GfY+3CX6XcncxZV8oPZxC25f6/sOlne342XQI3/OQvPsvy
BxGZ+rsoAhH2m6q+UpBAkLTlaX2UjsFvdcGaVbL50DJBSSTXobHx
-----END CERTIFICATE-----
)EOF";


/*
    Certificate:
    Data:
        Version: 3 (0x2)
        Serial Number: 0 (0x0)
    Signature Algorithm: sha256WithRSAEncryption
        Issuer:
            commonName                = Go Daddy Root Certificate Authority - G2
            organizationName          = GoDaddy.com, Inc.
            localityName              = Scottsdale
            stateOrProvinceName       = Arizona
            countryName               = US
        Validity
            Not Before: Sep  1 00:00:00 2009 GMT
            Not After : Dec 31 23:59:59 2037 GMT
        Subject:
            commonName                = Go Daddy Root Certificate Authority - G2
            organizationName          = GoDaddy.com, Inc.
            localityName              = Scottsdale
            stateOrProvinceName       = Arizona
            countryName               = US
        Subject Public Key Info:
            Public Key Algorithm: rsaEncryption
                Public-Key: (2048 bit)
                Modulus:
                    00:bf:71:62:08:f1:fa:59:34:f7:1b:c9:18:a3:f7:
                    80:49:58:e9:22:83:13:a6:c5:20:43:01:3b:84:f1:
                    e6:85:49:9f:27:ea:f6:84:1b:4e:a0:b4:db:70:98:
                    c7:32:01:b1:05:3e:07:4e:ee:f4:fa:4f:2f:59:30:
                    22:e7:ab:19:56:6b:e2:80:07:fc:f3:16:75:80:39:
                    51:7b:e5:f9:35:b6:74:4e:a9:8d:82:13:e4:b6:3f:
                    a9:03:83:fa:a2:be:8a:15:6a:7f:de:0b:c3:b6:19:
                    14:05:ca:ea:c3:a8:04:94:3b:46:7c:32:0d:f3:00:
                    66:22:c8:8d:69:6d:36:8c:11:18:b7:d3:b2:1c:60:
                    b4:38:fa:02:8c:ce:d3:dd:46:07:de:0a:3e:eb:5d:
                    7c:c8:7c:fb:b0:2b:53:a4:92:62:69:51:25:05:61:
                    1a:44:81:8c:2c:a9:43:96:23:df:ac:3a:81:9a:0e:
                    29:c5:1c:a9:e9:5d:1e:b6:9e:9e:30:0a:39:ce:f1:
                    88:80:fb:4b:5d:cc:32:ec:85:62:43:25:34:02:56:
                    27:01:91:b4:3b:70:2a:3f:6e:b1:e8:9c:88:01:7d:
                    9f:d4:f9:db:53:6d:60:9d:bf:2c:e7:58:ab:b8:5f:
                    46:fc:ce:c4:1b:03:3c:09:eb:49:31:5c:69:46:b3:
                    e0:47
                Exponent: 65537 (0x10001)
        X509v3 extensions:
            X509v3 Basic Constraints: critical
                CA:TRUE
            X509v3 Key Usage: critical
                Certificate Sign, CRL Sign
            X509v3 Subject Key Identifier: 
                3A:9A:85:07:10:67:28:B6:EF:F6:BD:05:41:6E:20:C1:94:DA:0F:DE
    Signature Algorithm: sha256WithRSAEncryption
         99:db:5d:79:d5:f9:97:59:67:03:61:f1:7e:3b:06:31:75:2d:
         a1:20:8e:4f:65:87:b4:f7:a6:9c:bc:d8:e9:2f:d0:db:5a:ee:
         cf:74:8c:73:b4:38:42:da:05:7b:f8:02:75:b8:fd:a5:b1:d7:
         ae:f6:d7:de:13:cb:53:10:7e:8a:46:d1:97:fa:b7:2e:2b:11:
         ab:90:b0:27:80:f9:e8:9f:5a:e9:37:9f:ab:e4:df:6c:b3:85:
         17:9d:3d:d9:24:4f:79:91:35:d6:5f:04:eb:80:83:ab:9a:02:
         2d:b5:10:f4:d8:90:c7:04:73:40:ed:72:25:a0:a9:9f:ec:9e:
         ab:68:12:99:57:c6:8f:12:3a:09:a4:bd:44:fd:06:15:37:c1:
         9b:e4:32:a3:ed:38:e8:d8:64:f3:2c:7e:14:fc:02:ea:9f:cd:
         ff:07:68:17:db:22:90:38:2d:7a:8d:d1:54:f1:69:e3:5f:33:
         ca:7a:3d:7b:0a:e3:ca:7f:5f:39:e5:e2:75:ba:c5:76:18:33:
         ce:2c:f0:2f:4c:ad:f7:b1:e7:ce:4f:a8:c4:9b:4a:54:06:c5:
         7f:7d:d5:08:0f:e2:1c:fe:7e:17:b8:ac:5e:f6:d4:16:b2:43:
         09:0c:4d:f6:a7:6b:b4:99:84:65:ca:7a:88:e2:e2:44:be:5c:
         f7:ea:1c:f5
*/
