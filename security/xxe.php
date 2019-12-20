<?php

$xml = <<<XML
<?xml version="1.0"?>
<!DOCTYPE root [
<!ENTITY c PUBLIC "bar" "/etc/passwd">
]>
<root>
    <test>Test</test>
    <sub>&c;</sub>
</root>
XML;

$dom = new DOMDocument();
//libxml_disable_entity_loader(true);

$dom->loadXML($xml, LIBXML_NOENT | LIBXML_DTDLOAD);

// Prints Test.
print $dom->textContent;

