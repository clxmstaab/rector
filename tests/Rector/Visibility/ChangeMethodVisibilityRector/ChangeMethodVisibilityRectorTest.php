<?php declare(strict_types=1);

namespace Rector\Tests\Rector\Visibility\ChangeMethodVisibilityRector;

use Rector\Testing\PHPUnit\AbstractRectorTestCase;

/**
 * @covers \Rector\Rector\Visibility\ChangeMethodVisibilityRector
 */
final class ChangeMethodVisibilityRectorTest extends AbstractRectorTestCase
{
    public function test(): void
    {
        $this->doTestFiles(
            [[__DIR__ . '/Wrong/wrong.php.inc', __DIR__ . '/Correct/correct.php.inc'], [
                __DIR__ . '/Wrong/wrong2.php.inc',
                __DIR__ . '/Correct/correct2.php.inc',
            ]]
        );
    }

    protected function provideConfig(): string
    {
        return __DIR__ . '/config.yml';
    }
}
