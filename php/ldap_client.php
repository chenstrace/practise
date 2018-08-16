<?php
error_reporting(-1);
ini_set('display_errors', 1);

function login_ldap($username, $passwd, $ldaphost, $ldapport = 389)
{
    $ldapconn = ldap_connect($ldaphost, $ldapport) or die("Could not connect to $ldaphost");
    if (ldap_set_option($ldapconn, LDAP_OPT_PROTOCOL_VERSION, 3)) {
        echo "Using LDAPv3\n";
    } else {
        echo "Failed to set protocol version to 3\n";
    }

    if (ldap_set_option($ldapconn, LDAP_OPT_REFERRALS, false)) {
        echo "LDAP_OPT_REFERRALS success\n";
    } else {
        echo "LDAP_OPT_REFERRALS failed\n";
    }

    $ldapbind = ldap_bind($ldapconn, $username, $passwd);

    if ($ldapbind) {
        echo "LDAP bind successful...\n";
    } else {
        echo "LDAP bind failed...\n";
    }
}

$username = "mhs\\jili.chen";
$passwd = "xxx";
$ldaphost = "ldap://10.9.12.51";
$ldapport = 389;
login_ldap($username, $passwd, $ldaphost, $ldapport);
