<?php

namespace Rector\Tests\Renaming\Rector\Name\RenameClassRector\FixtureAutoImportNamesPhp74;

use Safe\DateTimeImmutable;

final class DemoFile
{
    private \DateTimeImmutable $date;

    public function getDate(): \DateTimeImmutable
    {
        $x = new \DateTimeImmutable();
        return $this->date;
    }
}
